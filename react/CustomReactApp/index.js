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

customRender(customElement, customRoot1);   /**changed name of customRoot to customRoot1 as customRoot was just a parameter but customRoot1 is a document element having id root */


/**or you can add simple loop functionality for setting attributes rather than setting them one by one using          for( const i in customElement.props){}*/



 /** function customRender(customElement, customRoot){               
    const domElement = document.createElement(customElement.type);
    domElement.innerHTML = customElement.children;
  
    for(const i in customElement.props){
        if(prop==='children'){continue;}
    domElement.setAttribute(i, customElement.props[i]);  
    }
    customRoot.appendChild(domElement);
}

*/
