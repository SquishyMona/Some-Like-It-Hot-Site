function hamburgerClick() {
    var x = document.getElementById("navBar");
    if (x.className === "nav") {
      x.className += " responsive"
      x.style.maxHeight = "100%";
    } else {
      x.className = "nav";
      x.style.maxHeight = "48px";
    }
  }