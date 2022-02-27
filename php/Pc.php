<?php

include "Processor.php";
include "Disk.php";
include "Ram.php";

class Pc
{
    private $Processor_Object;
    private $Disk_Object;
    private $Ram_Object;
    private $TotalPc;

    function __construct($ProcessorX, $DiskX, $RamX, $Total)
    {
        $this->Processor_Object = $ProcessorX;
        $this->Disk_Object = $DiskX;
        $this->Ram_Object = $RamX;
        $this->TotalPc = $Total;
    }

    function setProcessorObject($ProcessorX)
    {
        $this->Processor_Object = $ProcessorX;
    }

    function getProcessorObject()
    {
        return $this->Processor_Object;
    }

    function setDiskObject($DiskX)
    {
        $this->Disk_Object = $DiskX;
    }

    function getDiskObject()
    {
        return $this->Disk_Object;
    }

    function setRamObject($RamX)
    {
        $this->Ram_Object = $RamX;
    }

    function getRamObject()
    {
        return $this->Ram_Object;
    }

    function setTotalPrice($Total)
    {
        $this->TotalPc = $Total;
    }

    function getTotalPrice()
    {
        return $this->TotalPc;
    }

    function print()
    {
        echo "Spesifikasi :<br/>";
        $this->Processor_Object->print();
        $this->Disk_Object->print();
        $this->Ram_Object->print();
        echo "Total (Rp) : " . $this->getTotalPrice() . "<br/>";
    }
}
