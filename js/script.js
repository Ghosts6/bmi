particlesJS("particles-js", {
    particles: {
      number: {
        value: 150,
        density: {
          enable: true,
          value_area: 800
        }
      },
      color: {
        value: "#ffffff"
      },
      shape: {
        type: "circle",
        stroke: {
          width: 0,
          color: "#000000"
        },
        polygon: {
          nb_sides: 5
        },
        image: {
          src: "path/to/your/snowdrop-image.png",
          width: 100,
          height: 100
        }
      },
      opacity: {
        value: 0.5,
        random: true,
        anim: {
          enable: true,
          speed: 1,
          opacity_min: 0,
          sync: false
        }
      },
      size: {
        value: 10,
        random: true,
        anim: {
          enable: true,
          speed: 3,
          size_min: 0,
          sync: false
        }
      },
      line_linked: {
        enable: false
      },
      move: {
        enable: true,
        speed: 1,
        direction: "bottom",
        random: false,
        straight: false,
        out_mode: "out",
        bounce: false,
        attract: {
          enable: false,
          rotateX: 600,
          rotateY: 1200
        }
      }
    },
    interactivity: {
      detect_on: "canvas",
      events: {
        onhover: {
          enable: false
        },
        onclick: {
          enable: false
        },
        resize: true
      }
    },
    retina_detect: true
  });

// bmi
function toggleSubmit() {
    var weightInput = document.getElementById("wight").value;
    var heightInput = document.getElementById("height").value;
    
    if (weightInput.trim() === "" || heightInput.trim() === "") {
        alert("Please enter both weight and height.");
        return;
    }
    
    var weight = parseFloat(weightInput);
    var height = parseFloat(heightInput);

    if (isNaN(weight) || isNaN(height)) {
        alert("Please enter valid numbers for weight and height.");
        return;
    }

    height /= 100;
    height **= 2;
    var bmi = weight / height;
    console.log("bmi =", bmi);

    var resultElement = document.querySelector(".result");
    var bmiResultElement = resultElement.querySelector(".bmi-result");

    if (!bmiResultElement) {
        bmiResultElement = document.createElement("div");
        bmiResultElement.classList.add("bmi-result");
        resultElement.appendChild(bmiResultElement);
    }

    var bmiCategory;

    if (bmi < 18.4) {
        bmiCategory = "under weight";
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        bmiCategory = "normal weight";
    } else if (bmi >= 25 && bmi <= 39.9) {
        bmiCategory = "over weight";
    } else {
        bmiCategory = "obese";
    }

    bmiResultElement.innerHTML = "Your BMI: " + bmi.toFixed(2) + "<br>Category: " + bmiCategory;

    var container = document.querySelector(".container");
    container.style.display = "none";
    resultElement.style.display = "block";
}

function toggleHome() {
    var container = document.querySelector(".container");
    var resultElement = document.querySelector(".result");

    container.style.display = "block";
    resultElement.style.display = "none";

    var bmiResultElement = resultElement.querySelector(".bmi-result");
    if (bmiResultElement) {
        bmiResultElement.remove();
    }
}
