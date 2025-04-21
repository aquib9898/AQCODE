
const inputText=document.querySelector('#input-box')
const list=document.querySelector('#ul1')
function addTask(){
 
    if(inputText.value===''){alert("no task added, add a task")}else{
    let li=document.createElement('li');
    li.innerText=inputText.value;

    deleteButton=document.createElement('span');
    deleteButton.innerText="  \u00d7";
        li.appendChild(deleteButton);

    list.appendChild(li); 
    inputText.value=""}  

}
list.addEventListener("click",function(e){
    if(e.target.tagName==="SPAN"){e.target.parentElement.remove();}
    else if(e.target.tagName==="LI"){e.target.classList.toggle('checked');}
})