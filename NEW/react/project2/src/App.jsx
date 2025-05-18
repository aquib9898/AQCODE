import Card from './components/card'
import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {

  return (
    <>
    <h1 class="text-blue-900">Tailwind test</h1>
    <Card username="aquib"/>
    <Card username="user2"/>
    </>
    
  )
}

export default App
