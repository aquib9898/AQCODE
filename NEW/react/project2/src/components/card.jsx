import React from 'react'

function Card({username}){
    return(
        <div class="mx-auto w-[30vw] h-[40vw] bg-black relative" >
            <img src="/react.jpg" class="w-full h-full object-contain relative"></img>
            <p class="absolute bottom-4 left-4 text-green-600">HELLO HELLO HELLLLOOOOOOO {username}</p>




        </div>
    )
};

export default Card