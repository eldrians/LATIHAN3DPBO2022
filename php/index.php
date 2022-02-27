<?php

include "Pc.php";

$ProcessorAxel = new Processor("AMD Ryzen 9 3900X", 8200000);
$DiskAxel = new Disk("SSD", 1000, 1195000);
$RamAxel = new Ram(32, 21500000);

$TotalPrice = $ProcessorAxel->getPriceProcessor() + $DiskAxel->getPriceDisk() + $RamAxel->getPriceRam();

$PcAxel = new Pc($ProcessorAxel, $DiskAxel, $RamAxel, $TotalPrice);

$PcAxel->print();

?>