import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  const [count, setCount] = useState(0);

  const addValue = () => {
    setCount(count + 1);
  };

  const removeValue = () => {
    setCount(count - 1);
  };

  function resetValue(){
    setCount(0);
  };

  return (
    <>
      <div>Hello from App!</div> {/* Added this line */}
      <h1> i hope this works {count}</h1>
      <br />
      <h2>counter value is {count}</h2>
      <br />
      <button onClick={addValue}>add to counter {count}</button>
      <button onClick={removeValue}>remove from counter {count}</button>
      <button onClick={resetValue}>Reset</button>
    </>
  )
}

export default App
