---
title: "🐍 What is Robophysics?"
nav_order: 1.5
---

# What is Robophysics?

<div style="text-align:center; margin-top:20px; margin-bottom:32px;">
  <video autoplay muted loop playsinline
         style="width:100%; max-width:900px; border-radius:12px; border:1px solid #ccc; box-shadow:0 3px 10px rgba(0,0,0,0.2);">
    <source src="files/robo_video.mp4" type="video/mp4">
    Your browser does not support the video tag.
  </video>
  <div style="font-size:0.9rem; color:#555; margin-top:8px;">
    Robophysical models; from left to right: mudskipper, centipede, surface-swim MILR, 3-link magic swimmer, 3-link sand-swimmer, MILR in clutter
  </div>
</div>


<div style="text-align:center; margin-top:20px;">
  <iframe src="files/robophysicsReview.pdf"
          width="100%"
          height="800px"
          style="border:1px solid #ccc; border-radius:8px;">
  </iframe>
</div>

---

<div style="margin-top:24px;">
  <b>📚 Citation (BibTeX)</b>
  <pre id="bibtex" style="background:#f8f8f8; border:1px solid #ccc; border-radius:6px; padding:12px; overflow-x:auto; font-size:0.9rem;">
@article{goldman2016robophysics,
  title={Robophysics: the physics of moving robots},
  author={Goldman, Daniel I},
  journal={Reports on Progress in Physics},
  volume={79},
  number={11},
  pages={110001},
  year={2016},
  publisher={IOP Publishing},
  doi={10.1088/0034-4885/79/11/110001}
}
  </pre>

  <button onclick="copyBib()" style="background-color:#2b6cb0; color:white; border:none; padding:8px 16px; border-radius:6px; cursor:pointer;">
    📋 Copy Citation
  </button>
  <span id="copiedMsg" style="margin-left:10px; color:green; display:none;">Copied!</span>
</div>

<script>
function copyBib() {
  const text = document.getElementById("bibtex").innerText;
  navigator.clipboard.writeText(text);
  const msg = document.getElementById("copiedMsg");
  msg.style.display = "inline";
  setTimeout(() => { msg.style.display = "none"; }, 1500);
}
</script>
