import { useState } from 'react'
import './App.css'

function App(clrs) {
  const [color , setcolor] = useState("red")

  return (
    <>
    
    <div id="div1">
      this is div1
    </div>
    <div id="chooser">
      <div id="button1">white</div>
      <div id="button2">red</div>
      <div id="button3">blue</div>
      <div id="button4" style={{backgroundColor:clrs.clr1}}>{clrs.clr1}</div>
      <div id="button5" style={{backgroundColor:clrs.clr2}}>{clrs.clr2}</div>
      <div id="button6" style={{backgroundColor:clrs.clr3}}>{clrs.clr3}</div>

    </div>

   

    </>
  )
}

export default App
