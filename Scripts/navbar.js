function hamburgerClick() {
    var x = document.getElementById("navBar");
    if (x.className === "nav") {
      x.className += " responsive"
      x.style.maxHeight = "100%";
      x.style.height = "432px";
    } else {
      x.className = "nav";
      x.style.maxHeight = "48px";
    }
  }