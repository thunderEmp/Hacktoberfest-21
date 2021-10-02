console.log("rendered");
var participants = 
[  
   {  
      "github":"hkaur008",
      "name":"Hargun Kaur",
      "intro":"Software Extern @github | @MLH Summer and Fall Fellow'21| Microsoft Engage '21💻,MLSA @microsoft | Founder @CodeFlow201 | NIT Kurukshetra | vGHC scholar '21",
      "quote":"Do what you like! ❤"
   },
   {  
      "github":"fts18",
      "name":"Ananay",
      "intro":"Web Designer",
      "quote":"One day you will leave this world behind so live a life you will remember!"
   },
   {  
    "github":"chhabraharsh37",
    "name":"Harsh Chhabra",
    "intro":"founder at CODEFLOW | gdsc lead",
    "quote":"I ❤ code"
 },
 {  
  "github":"Github Handle",
  "name":"Name",
  "intro":"Anything you want to share !!",
  "quote":"quote ✨"
},
{  
  "github":"Github Handle",
  "name":"Name",
  "intro":"Anything you want to share !!",
  "quote":"quote ✨"
},
{  
  "github":"Github Handle",
  "name":"Name",
  "intro":"Anything you want to share !!",
  "quote":"quote ✨"
},

  
]


renderCards();
function renderCards(){
  var theDiv = document.getElementById("list");
    for(var i = 0; i < participants.length; i++){
      var content =`<div class="col">
      <div class="card border-success mb-3" style="max-width: 18rem;">
        <div class="card-header bg-transparent border-success"><a href="https://github.com/${participants[i].github}"><img src="github.png" height="32px" class="m-2"/>${participants[i].github}</a></div>
        <div class="card-body text-success">
          <h5 class="card-title">${participants[i].name}</h5>
          <p class="card-text">${participants[i].intro}</p>
        </div>
        <div class="card-footer bg-transparent border-success">${participants[i].quote}</div>
      </div>
    </div>`;
      theDiv.insertAdjacentHTML('beforeend',content);
    }
  }
