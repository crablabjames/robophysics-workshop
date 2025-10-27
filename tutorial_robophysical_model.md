---
title: Build Your First Robophysical Model
nav_order: 2
---

# Build Your First Robophysical Model

This short guide helps you set up the essential software and resources for constructing and testing your own **3-link robophysical swimmer**.

---

## 🧰 Software to Download

Before you begin, install the following tools:

| Software | Description | Download Link |
|-----------|--------------|----------------|
| **Arduino IDE** | Upload and run control code on microcontrollers (e.g., Arduino Nano / Uno). | [arduino.cc/en/software](https://www.arduino.cc/en/software) |
| **MATLAB** | Analyze motion data, simulate swimmer trajectories, and visualize shape-space loops. | [mathworks.com/help/install/ug/install-products-with-internet-connection.html](https://www.mathworks.com/help/install/ug/install-products-with-internet-connection.html) |
| **ImageJ** | Open-source tool for motion tracking and kinematic measurements from videos. | [imagej.net/ij/download.html](https://imagej.net/ij/download.html) |
| **3-Link Swimmer Simulation Code** | MATLAB-based scripts for modeling and visualizing swimmer kinematics. | [Dropbox Folder →](https://www.dropbox.com/scl/fo/fifrx67pf1lssttvumt3f/AKYeBejfqaDkivSmSa4n40Q?rlkey=cna9eng1c1j6jwajgbd6fp60h&dl=0) |

---

## 🪛 Getting Started

After installing the above tools:

1. **Open Arduino IDE**  
   - Connect your board (e.g., Arduino Nano or Uno) via USB.  
   - Verify communication: *Tools → Port → (select your COM port)*  
   - Try uploading a simple Blink example (`File → Examples → Basics → Blink`).

2. **Download the Simulation Folder**  
   - From the Dropbox link above.  
   - Open the MATLAB `.m` files to simulate link motion and shape cycles.  
   - Run `main_3link.m` (or equivalent) to visualize motion trajectories.

3. **Track Experimental Data**  
   - Record a short video of your physical swimmer in motion.  
   - Open it in ImageJ to measure displacement and joint angles.  
   - Export data to MATLAB for comparison with simulation.

---

## 📘 Coming Next

Once your setup is working, move on to:
- [Geometry Mechanics Basics](tutorial_geometry_mech.md) – How shape-space cycles produce motion  
- [Experiment Protocol](tutorial_robophysical_model_experiment.md) – How to record and analyze real robot motion  

---

*Developed by the Crab Lab, Georgia Tech (Robophysics Bootcamp 2025 materials).*
