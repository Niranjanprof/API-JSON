# Application Programming Interface


<ul>
<li>
An API is a computing interface defines interactions between multiple software intermediaries. 
</li>

<li>
It defines the kinds of calls or requests that can be made
</li>

<li>
"Behind" details of  API does not affect the users.
</li>
</ul>

![API](https://github.com/Niranjanprof/API-JSON/blob/master/RSC/1.png)![API](https://github.com/Niranjanprof/API-JSON/blob/master/RSC/2.png)

---

# JavaScript Object Notation


<ul>
<li>
JSON open standard file format, and data interchange format, that uses human-readable text to store and transmit data objects consisting of attribute–value pairs and array data types  
</li>

<li>
Replacement for XML in AJAX systems
</li>

</ul>
---

##  Simple json example


```json
{
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
  }
```
---


## xml of the above json


```xml
<?xml version="1.0" encoding="UTF-8"?>
<root>
   <Company>
      <element>
         <Age>18</Age>
         <Name>Prof.Moriarty</Name>
         <address>
            <city>New York</city>
            <postalCode>10021-3100</postalCode>
            <state>NY</state>
            <streetAddress>Hill Street</streetAddress>
         </address>
         <isAlive>true</isAlive>
         <phoneNumbers>
            <element>
               <number>212 352-1353</number>
               <type>office</type>
            </element>
            <element>
               <number>146 125-8637</number>
               <type>personal</type>
            </element>
         </phoneNumbers>
      </element>
   </Company>
</root>
```
---

## html of the above json

```html
<!DOCTYPE html>
<html>
    <head>
		<meta charset='UTF-8'>
		<title>JSON To HTML using codebeautify.org</title>
	</head>
	<body>
		<table border=1>
			<thead>
				<tr>
					<th>Name,isAlive,Age,address,phoneNumbers</th>
					<th>COLUMN2</th>
					<th>COLUMN3</th>
					<th>COLUMN4</th>
					<th>COLUMN5</th>
					<th>COLUMN6</th>
					<th>COLUMN7</th>
				</tr>
			</thead>
			<tbody>
				<tr>
					<td>Prof.Moriarty,true,18,Hill Street <td>
					<td>New York</td>
					<td>NY</td>
					<td>10021-3100,office</td>
					<td>212 352-1353</td>
					<td>personal</td>
					<td>146 125-8637</td>
				</tr>
				<tr>
					<td></td>
					<td>&nbsp</td>
					<td>&nbsp</td>
					<td>&nbsp</td>
					<td>&nbsp</td>
					<td>&nbsp</td>
					<td>&nbsp</td>
				</tr>
			</tbody>
		</table>
	</body>
</html>
```

---

## As python dictionary
```python
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
```
Output
```
<class 'dict'>

{
    'Company': [
        {
            'Name': 'Prof.Moriarty', 
            'isAlive': True, 
            'Age': 18, 
            'address': 
            {
                'streetAddress': 'Hill Street', 
                'city': 'New York', 
                'state': 'NY', 
                'postalCode': '10021-3100'
            }, 
            'phoneNumbers': [
                {
                    'type': 'office', 
                    'number': '212 352-1353'
                }, 
                {
                    'type': 'personal', 
                    'number': '146 125-8637'
                }
            ]
        }
    ]
}

```
---
 ## Something Bigger

 ```json
 {
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
      },
      {
        "Name": "Klepsydrda Alpha",
        "isAlive": true,
        "Age": 19,
        "address": {
          "streetAddress": "Mapple Palace",
          "city": "Redmond",
          "state": "RD",
          "postalCode": "11021-4100"
        },
        "phoneNumbers": [
          {
            "type": "office",
            "number": "212 352-1353"
          },
          {
            "type": "personal",
            "number": "146 115-8997"
          }
        ]
      }
    ]
  }

 ```