---
title: 3-Link CAD Models
nav_order: 5
---

# 3-Link CAD Models

This page hosts the mechanical designs for the **3-link robophysical swimmer**, including:
- Interactive 3D preview (rotate and zoom)
- Printable STL files
- Original SolidWorks CAD files for editing

---

## 🧩 Interactive 3D Preview

<script type="module" src="https://unpkg.com/@google/model-viewer/dist/model-viewer.min.js"></script>

<model-viewer src="files/sta_leg_8.glb"
              camera-controls
              auto-rotate
              style="width:100%; max-width:600px; height:400px; background-color:#f8f8f8; border:1px solid #ccc; border-radius:8px; margin-top:16px;">
</model-viewer>

_Above: leg variant (8° curvature) preview._

---

## 📦 STL Files (for printing / viewing)

These STL meshes can be opened in any slicer (Bambu Studio, PrusaSlicer, Cura, etc.) or viewed online.

- [Case (STL)](files/case.STL)  
- [Standard leg 5° (STL)](files/sta_leg_5.STL)  
- [Leg variant 8° (STL)](files/sta_leg_8.STL)

> 💡 Tip: keep part scale consistent — all models are in millimeters by default.

---

## ⚙️ SolidWorks Source Files

If you want to modify geometry or assembly constraints, use the SolidWorks files below.

- [Main assembly (SLDASM)](files/Assem1.SLDASM)  
- [Case (SLDPRT)](files/case.SLDPRT)  
- [Standard leg (SLDPRT)](files/sta_leg.SLDPRT)  
- [Leg variant 8° (SLDPRT)](files/sta_leg_8.SLDPRT)

You can open these directly in **SolidWorks 2022+**, or convert them to STEP/IGES for other CAD platforms (e.g., Fusion 360, Onshape).

---

## 🧱 Printing Notes

| Part | Material | Infill | Layer Height | Supports | Orientation |
|------|-----------|---------|---------------|-----------|--------------|
| Case | PLA / PETG | 30–40% | 0.20 mm | Yes (base only) | Flat base down |
| Leg 5° | PLA | 20% | 0.16 mm | None | Curve facing up |
| Leg 8° | PLA | 20% | 0.16 mm | None | Curve facing up |



---

_Last updated: {{ site.time | date: "%B %Y" }}_
