# Hardware

> [!warning]
> Lasers can be dangerous! Act responsibly and follow your local laws and regulations.

## BOM

* Laser Module Ø10x26 mm (e.g. [laserfuchs](https://www.laserfuchs.de/en/index.php/detail/4d64d8b891444d76b7d398439a530973))
* Pin header 1x08
* Perfboard Scrap (at least 26x14 mm)

## Assembly

1. 3D print [Presenter.Laser.stl](Presenter.Laser.stl)
   1. Fused Filament Fabrication with a 1.2 mm layer height and support on the print plate works well.
2. Slot the laser into the 3D printed part
3. Shorten the wires
4. Solder pin header and wires to the perfboard
   1. 5 V (red) and GND (black) to the corresponding GPIOs
   2. Signal line (yellow) to GPIO A7
5. Super-glue the perfboard to the 3D part
6. Sand the protruding part smooth.
