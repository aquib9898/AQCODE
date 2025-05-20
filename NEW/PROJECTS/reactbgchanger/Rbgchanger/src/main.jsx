import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import './index.css'
import App from './App.jsx'

createRoot(document.getElementById('root')).render(
  <StrictMode>
    <App clr1="yellow" clr2="green" clr3="pink" />
  </StrictMode>,
)
