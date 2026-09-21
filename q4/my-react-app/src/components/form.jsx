import React from "react";
export default function FormMaker(){
    function formValidator(e){
        e.preventDefault();
        formEmail = useElementById("email") 
    }
    return (
    <div>
    <legend style={{border:"2px solid black"}}>
      <form method='POST' onSubmit={formValidator}>
        <label for="name">Name: </label>
        <input id="name" placeholder='Gunaj Chugh' type="text"/><br/>

        <label for="email">Email: </label>
        <input id="email" placeholder='gunnajpchugh@gmail.com' type="email"/><br/>
        
        <label for="phone">Contact: </label>
        <input id="phone" placeholder='Gunaj Chugh' type="number"/><br/>
        
        <label for="dept">Department: </label>
        <input id="dept" placeholder='softwareDevelopment' type="text"/><br/>
        
        <label for="exp">Experience (in years): </label>
        <input id="exp" placeholder='5' type="number" /><br/>
        
        <label for="skills">Skills: </label>
        <label for="cpp">C++: </label>
          <input id="cpp" class = "skills" type="checkbox"/>
        <label for="webd">Web Development: </label>
          <input id="webd" type="checkbox" class = "skills"/>
        <label for="fsdev">Full-Stack-Web-Development: </label>
          <input id="fsdev" type="checkbox" class = "skills"/>
        <label for="aiml">AI-ML: </label>
          <input id="aiml" type="checkbox" class = "skills"/>
      </form>
      </legend>
      </div>
    );
}