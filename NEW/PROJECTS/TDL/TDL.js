const inputBox=document.querySelector('#input')
const list=document.querySelector('#ul1')
function addTask(){
    if(inputBox.value===''){alert('enter a task first')}else{
    li=document.createElement('li');
    li.innerText=inputBox.value;

    deleteButton=document.createElement('span');
    deleteButton.innerText="\u00d7";

    li.appendChild(deleteButton);
    list.appendChild(li);}
    inputBox.value=""

 

}

list.addEventListener("click",function(e){
    if(e.target.tagName==="SPAN"){e.target.parentElement.remove()}else if(e.target.tagName==="LI"){e.target.classList.toggle('checked');}
})
