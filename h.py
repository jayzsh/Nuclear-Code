from numpy import mean

class Contributor:
        def __init__(self, name, n_skills, skill_name_array, skill_level_array):
                self.name = name
                self.n_skills = n_skills
                self.skill_name_array = skill_name_array
                self.skill_level_array = skill_level_array

        def preview(self):
                print(self.name)
                print(self.n_skills)
                print(self.skill_name_array)
                print(self.skill_level_array)
                print()

class Project:
        def __init__(self, name,  n_days, score, best_before, n_roles, skill_name_array, skill_level_array):
                self.name = name
                self.n_days = n_days
                self.score = score
                self.best_before = best_before
                self.n_roles = n_roles
                self.skill_name_array = skill_name_array
                self.skill_level_array = skill_level_array
                self.assignees = []
        
        def preview(self):
                print(self.name)
                print(self.n_days)
                print(self.score)
                print(self.best_before)
                print(self.n_roles)
                print(self.skill_name_array)
                print(self.skill_level_array)
                print()
        
        def look_for_mentor(self, s_level, s_name):
                if len(self.assignees) == 0:
                        return False
                for o in range(len(self.assignees)):
                        if s_name in self.assignees[o].skill_name_array:
                                if s_level <= (self.assignees[o].skill_name_array.index(s_name)):
                                        return True
                return False


file = open("c")

s = file.readline()
n_contrib = int(s.split()[0])
n_projects = int(s.split()[1])

contributors = []
for i in range(n_contrib):
        s = file.readline()
        s = s.split()
        s = [s[0], int(s[1])]

        skill_name = []
        skill_level = []
        for j in range(s[1]):
                skill = file.readline()
                skill_name.append(skill.split()[0])
                skill_level.append(int(skill.split()[1]))

        contributors.append(Contributor(s[0], s[1], skill_name, skill_level))

projects = []
for i in range(n_projects):
        s = file.readline()
        name = s.split()[0]
        n_days = int(s.split()[1])
        score = int(s.split()[2])
        best_before = int(s.split()[3])
        n_roles = int(s.split()[4])

        skill_name = []
        skill_level = []
        for j in range(n_roles):
                s = file.readline()
                skill_name.append(s.split()[0])
                skill_level.append(int(s.split()[1]))
        
        projects.append(Project(name, n_days, score, best_before, n_roles, skill_name, skill_level))

# sort projects in descending order of (score / n_days) value
p = projects
n = len(p)
for i in range(n):
        already_sorted = True
        for j in range(n - i - 1):
                if (p[j].score / p[j].n_days) < (p[j + 1].score / p[j + 1].n_days):
                        p[j], p[j + 1] = p[j + 1], p[j]
                        already_sorted = False

        if already_sorted:
                break

# sort contributors in ascending order of mean of skill_level_array elements
c = contributors
n = len(c)
for i in range(n):
        already_sorted = True
        for j in range(n - i - 1):
                if mean(c[j].skill_level_array) > mean(c[j + 1].skill_level_array):
                        c[j], c[j + 1] = c[j + 1], c[j]
                        already_sorted = False

        if already_sorted:
                break

# assignment
for i in range(len(p)):
        for j in range(p[i].n_roles):
                for k in range(len(c)):
                        if (p[i].skill_name_array[j] in c[k].skill_name_array):
                                if (
                                        p[i].skill_level_array[j] <= c[k].skill_level_array[c[k].skill_name_array.index(p[i].skill_name_array[j])] or (
                                                p[i].skill_level_array[j] - 1 == c[k].skill_level_array[c[k].skill_name_array.index(p[i].skill_name_array[j])] and
                                                p[i].look_for_mentor(p[i].skill_level_array[j], p[i].skill_name_array[j])
                                        )
                                ):
                                        if p[i].skill_level_array[j] - 1 == c[k].skill_level_array[c[k].skill_name_array.index(p[i].skill_name_array[j])]:
                                                p[i].assignees.append(c[k])
                                                c[k].skill_level_array[c[k].skill_name_array.index(p[i].skill_name_array[j])] += 1
                                        else:
                                                p[i].assignees.append(c[k])              

for i in p:
        if len(i.assignees) == 0:
                n_projects -= 1

print(n_projects)
for i in p:
        if len(i.assignees) != 0:
                print(i.name)
                for j in i.assignees:
                        print(j.name, end=' ')
                print()