import json

with open('companybig.json') as file:
    string = file.read()


print(type(string))
data = json.loads(string)

print(type(data))
print(data)

company = data['Company']
name = company[0]['Name']
age = company[0]['Age']

print(f"{name} is {age} year's old")