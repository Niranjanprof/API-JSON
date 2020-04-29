import json

string = '''{
    "Company": [
      {
        "Name": "Prof.Moriarty",
        "isAlive": true,
        "Age": 18,
        "address": {
          "streetAddress": "Hill Street",
          "city": "New York",
          "state": "NY",
          "postalCode": "10021-3100"
        },
        "phoneNumbers": [
          {
            "type": "office",
            "number": "212 352-1353"
          },
          {
            "type": "personal",
            "number": "146 125-8637"
          }
        ]
      }
    ]
  }'''

data = json.loads(string)
print(type(data))
print(data)