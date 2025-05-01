const customElement = {
    type: 'a',
    props:{
        href: 'https://www.google.com',
        target: 'blank'},
        children: 'click here to visit the link'

 }/** here the customRoot is just a parameter which can be changed later which it does */

function customRender(customElement, customRoot){               
    const domElement = document.createElement(customElement.type);
    domElement.innerHTML = customElement.children;
    domElement.setAttribute('href',customElement.props.href);
    domElement.setAttribute('target',customElement.props.target);
    customRoot.appendChild(domElement);
}

const customRoot1 = document.querySelector('#root')  ;

customRender(customElement, customRoot1);  
