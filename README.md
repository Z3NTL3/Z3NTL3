# mE:
```python
import asyncio

def AboutMe(*,name:str,age:float,interests:str) -> dict:
    about = {
      "Name" : f'{name}',
      "Age" : f'{age}',
      "Interests" : f'{interests}'
    }
    return about

async def Info():
  AboutZ3NTL3 = AboutMe(name="Z3NTL3",
  age=17.4,
  interests="Pentesting and Systems.")

  for titel,holder in AboutZ3NTL3.items():
    print('{cl}{t}{clr}'.format(cl='\033[36m'
    ,t=titel,
    clr='\033[0m') + ":",holder)
    await asyncio.sleep(0.5)
    
asyncio.run(Info())
```

```output
Output
```
![meboi](https://user-images.githubusercontent.com/48758770/154814337-cae0fcd8-afec-4ee6-831a-6613c49217bc.gif)

```js
// Wanna want to know more About Me?
var ga = Math.random() * (18 * 3);
const AboutMe = ['Z3NTL3', '17', 'Gym', `${ga}`];

let lengtepiemel;

var Teller = (eersteGetal,tweedeGetal,variabel,bericht) => {
    AboutMe.slice(eersteGetal,tweedeGetal).forEach(elementen => {
        variabel = elementen.length;
    }) 
    return console.log('%s: %s',bericht,variabel);
}

Teller(3,4,lengtepiemel,'Lengte Piemel');
