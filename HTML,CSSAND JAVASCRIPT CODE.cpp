<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8" />
<meta name="viewport" content="width=device-width, initial-scale=1.0" />
<title>1st Year Computer Science Student Portfolio</title>

<script src="https://cdn.tailwindcss.com"></script>

<script>
tailwind.config = {
  theme: {
    extend: {
      colors: {
        primary: "#10B981",
        darkbg: "#0d0d0d",
        card: "#141414"
      }
    }
  }
}
</script>

</head>

<body class="bg-darkbg text-white scroll-smooth">

<!-- ================= NAVBAR ================= -->
<nav class="fixed top-6 left-1/2 -translate-x-1/2 bg-white/5 backdrop-blur-xl border border-gray-800 px-8 py-3 rounded-full shadow-lg z-50">
  <ul class="flex gap-6 text-sm items-center">
    <li><a href="#home" class="hover:text-primary">Home</a></li>
    <li><a href="#about" class="hover:text-primary">About</a></li>
    <li><a href="#experience" class="hover:text-primary">Experiences</a></li>
    <li><a href="#projects" class="hover:text-primary">Projects</a></li>
    <li><a href="#education" class="hover:text-primary">Education</a></li>
    <li><a href="#certifications" class="hover:text-primary">Certification </a></li>
    <a href="#connect" class="hover:text-primary">Connect</a></li>

      <a href="c:\Users\DELL\Downloads\bilal.cv.jpeg" download class="bg-primary px-4 py-1 rounded-lg text-black font-semibold hover:scale-105 transition">
    Resume
      </a>
    </li>
  </ul>
</nav>

<!-- ================= HOME ================= -->
<section id="home" class="min-h-screen flex items-center justify-center px-8">
  <div class="grid md:grid-cols-2 gap-12 items-center">

    <div>
      <span class="bg-primary/20 text-primary px-4 py-1 rounded-full text-xs">
        1st Year CS Student
      </span>

      <h1 class="text-5xl font-bold mt-6 leading-tight">
        Building <span class="text-primary">Intelligent Systems</span>
      </h1>

      <p class="text-gray-400 mt-6">
       CS Student focused on the intersection of Machine Learning and Predictive Analytics. Passionate about developing AI-powered systems to solve complex real-world problems. .
      </p>
    </div>

    <div class="relative">
      <img src="c:\Users\DELL\Downloads\new.jpeg"
      <div class="absolute -top-6 -left-6 bg-card border border-gray-700 p-4 rounded-xl shadow-lg">
        <p class="text-sm text-gray-400"> c:\Users\DELL\Downloads\new.jpeg</p>
        <p class="text-primary font-semibold">A</p>
      </div>
    </div>

  </div>
</section>

<!-- ================= ABOUT ================= -->
<section id="about" class="px-8 py-24">
  <h2 class="text-3xl font-bold mb-10">About Me</h2>

  <div class="bg-card p-8 rounded-2xl border border-gray-800">
    <p class="text-gray-400 leading-relaxed">
   CS Student focused on the intersection of Machine Learning and Predictive Analytics. Passionate about developing AI-powered systems to solve complex real-world problems.

    </p>
  </div>
</section>
<!-- ================= EDUCATION ================= -->
<section id="education" class="px-8 py-24">
  <h2 class="text-3xl font-bold mb-10">Education</h2>

  <div class="grid md:grid-cols-2 gap-8">
    <div class="bg-card p-6 rounded-2xl border border-gray-800 hover:scale-105 transition">
      <h3 class="text-xl font-semibold text-primary">B.Sc Computer Science</h3>
      <p class="text-gray-400">University of Engneering and Technology Peshawar | 2025 - 2029</p>
      <p class="text-gray-500 mt-2">
        Specialization in Software  Engneering ,AI ,Machine learning and Web Development.
      </p>
    </div>

    <div class="bg-card p-6 rounded-2xl border border-gray-800 hover:scale-105 transition">
      <h3 class="text-xl font-semibold text-primary">Intermediate </h3>
      <p class="text-gray-400">Army Public School and College Pasban | 2023- 2025</p>
      <p class="text-gray-500 mt-2">
        Focus on Mathematics, Physics, and Computer Studies.
      </p>
    </div>
  </div>
</section>

<!-- ================= CERTIFICATIONS ================= -->
<section id="certifications" class="px-8 py-24">
  <h2 class="text-3xl font-bold mb-10">Certifications</h2>

  <div class="grid md:grid-cols-2 gap-8">
    <div class="bg-card p-6 rounded-2xl border border-gray-800 hover:scale-105 transition">
      <h3 class="text-xl font-semibold text-primary">Stanford Machine learning Certified</h3>
      <p class="text-gray-400">Issued: Jan 2026</p>
      <p class="text-gray-500 mt-2">
        Demonstrated skills in building and turning predictive models using supervised and unsupervised Learning with deep understanding of Gradient Descent , NeuralNetworks and Algorithmic optimization. 
      </p>
    </div>
    <div class="bg-card p-6 rounded-2xl border border-gray-800 hover:scale-105 transition">
      <h3 class="text-xl font-semibold text-primary">Harvard CS50X Certified</h3>
      <p class="text-gray-400">Issued: Dec 2025</p>
      <p class="text-gray-500 mt-2">
        Completed a comprehensive course gaining a rigorous foundation in computer science, low level programming and data structures.
      </p>
    </div>
  <div class="bg-card p-6 rounded-2xl border border-gray-800 hover:scale-105 transition">
    <h3 class="text-xl font-semibold text-primary">Cisco C++ Certified</h3>
      <p class="text-gray-400">Issued: Sep 2025</p>
      <p class="text-gray-500 mt-2">
     In this course, I covered the core pillars of C++ by building practical, real-life applications that solve complex problems. I gained hands-on experience in implementing Object-Oriented Programming (OOP), memory management, and advanced data structures
      </p>
  </div>
<div class="bg-card p-6 rounded-2xl border border-gray-800 hover:scale-105 transition">
    <h3 class="text-xl font-semibold text-primary">Digital Marketing Certified</h3>
      <p class="text-gray-400">Issued: Nov 2025</p>
      <p class="text-gray-500 mt-2">
​During this course I mastered data analytics tools to track campaign performance and maximize return on investment (ROI)
gained experience in content strategy and automated email marketing to drive audience engagement
 </p>
  </div>
<div class="bg-card p-6 rounded-2xl border border-gray-800 hover:scale-105 transition">
    <h3 class="text-xl font-semibold text-primary">UI/UX Certified</h3>
      <p class="text-gray-400">Issued: Feb 2026</p>
      <p class="text-gray-500 mt-2">
     UI/UX Designer with strong expertise in user research, interaction design and usability testing.
Experienced in transforming complex ideas into intuitive, scalable and user-centered digital solutions.
Dedicated to creating data driven design experiences that enhance user satisfaction and deliver measurable business impact.   
 </p>
  </div>
</section>
<!-- ================= EXPERIENCE ================= -->
<section id="experience" class="px-8 py-24">
  <h2 class="text-3xl font-bold mb-12">Experiences</h2>

  <div class="relative border-l border-gray-700 pl-10">

    <div class="mb-10">
      <h3>
        C++ Intern at Code Alpha
      </h3>
      <p class="text-gray-400">Jan 2026 - Present</p>
      <p class="text-gray-500 mt-2">
        Working on scalable real world applications
        and building different projects.
      </p>
    </div>
    <div class="mb-10">
      <h3>
        Team Manager at UET Peshawar
      </h3>
      <p class="text-gray-400">Aug 2025 - Present</p>
      <p class="text-gray-500 mt-2">
Strategic lead for a comprehensive career development program, overseeing a team to deliver counseling services and professional workshops. Directed all operations over an intensive eight-week period, ensuring consistent service quality and high student engagement through effective delegation and resource management.
      </p>
    </div>
    <h3>
        Harvard Aspire Leadership Program Participant
      </h3>
      <p class="text-gray-400">Jan 2026 - Present</p>
      <p class="text-gray-500 mt-2">
      Through Aspire, I have learned to look at problems not just locally, but through a global lens. Now I can understand how social and economic systems impact career paths.
​I have gained the knowledge of how to present yourself and your organization to the world, which likely helped you when representing the society to external counselors and  gained the skill of speaking to different audiences motivating our student peers while also communicating professionally with senior counselors or faculty. 
    </p>
    </div>
  </div>
</section>

<!-- ================= PROJECTS ================= -->
<section id="projects" class="px-8 py-24">
  <h2 class="text-3xl font-bold mb-10">Projects</h2>

  <div class="grid md:grid-cols-2 gap-8">

    <div class="bg-card p-8 rounded-2xl border border-gray-800 hover:scale-105 transition">
      <h3 class="text-2xl font-semibold">CGPA Calculator</h3>
      <p class="text-gray-400 mt-4">
        Developed a responsive CGPA Calculator.
      </p>
      <button class="mt-6 bg-primary px-4 py-2 rounded-lg text-black font-semibold">
        View Project
      </button>
    </div>

    <div class="bg-card p-8 rounded-2xl border border-gray-800 hover:scale-105 transition">
      <h3 class="text-2xl font-semibold">AI Powered Assessment Tool</h3>
      <p class="text-gray-400 mt-4">
        AI  Clinical Assessment Tool.
      </p>
      <button class="mt-6 bg-primary px-4 py-2 rounded-lg text-black font-semibold">
        View Project
      </button>
    </div>

  </div>
</section>

<!-- ================= CONNECT ================= -->
<section id="connect" class="px-8 py-24 text-center">
  <h2 class="text-3xl font-bold mb-12">Connect With Me</h2>

  <div class="flex justify-center gap-10 flex-wrap">

    <a href="https://github.com/mbilalabbasi765/PORTFOLIO.git" class="bg-card px-8 py-6 rounded-2xl border border-gray-800 hover:scale-105 transition">
      GitHub
    </a>

    <a href="https://www.linkedin.com/in/muhammad-bilal-abbasi-2aa3a7393?utm_source=share&utm_campaign=share_via&utm_content=profile&utm_medium=android_app" class="bg-card px-8 py-6 rounded-2xl border border-gray-800 hover:scale-105 transition">
      LinkedIn
    </a>

    <a href="mailto:mbilalabbasi765@gmail.com" class="bg-card px-8 py-6 rounded-2xl border border-gray-800 hover:scale-105 transition">
      Email   
  </a>
  </div>
</section>

<!-- ================= CONTACT FORM ================= -->
<section class="px-8 py-24">
  <h2 class="text-3xl font-bold mb-8 text-center">Send Me a Message</h2>

  <div class="max-w-xl mx-auto bg-card p-8 rounded-2xl border border-gray-800">

    <form id="contactForm" class="space-y-6">

      <div>
        <label class="block mb-2 text-gray-400">Your Name</label>
        <input type="text" id="name" required
          class="w-full bg-darkbg border border-gray-700 rounded-lg p-3 focus:border-primary outline-none">
      </div>

      <div>
        <label class="block mb-2 text-gray-400">Your Message</label>
        <textarea id="message" required rows="5"
          class="w-full bg-darkbg border border-gray-700 rounded-lg p-3 focus:border-primary outline-none"></textarea>
      </div>

      <button type="submit"
        class="w-full bg-primary py-3 rounded-lg font-semibold text-black hover:scale-105 transition">
        Send Message
      </button>

      <p id="successMsg" class="text-green-400 hidden text-center">
        Message Sent Successfully ✅
      </p>

    </form>
  </div>
</section>

<!-- ================= FOOTER ================= -->
<footer class="text-center py-10 border-t border-gray-800">
  <p class="text-gray-500">© 2026  All rights reserved </p>
  <p class="text-gray-500">© Designed with ♥ by M.BilalAbbasi </p>
  <button onclick="scrollToTop()" class="mt-4 bg-primary px-4 py-2 rounded text-black">
    Back to Top
  </button>
</footer>

<!-- ================= JS ================= -->
<script>
document.getElementById("contactForm").addEventListener("submit", function(e){
  e.preventDefault();
  document.getElementById("successMsg").classList.remove("hidden");
  this.reset();
});

function scrollToTop(){
  window.scrollTo({top:0,behavior:"smooth"});
}
</script>

</body>
</html