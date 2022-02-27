<?php

class Disk{
    private $NameDisk;
    private $CapacityDisk;
    private $PriceDisk;

    function __construct($Name, $Capacity, $Price)
    {
        $this->NameDisk = $Name;
        $this->CapacityDisk = $Capacity;
        $this->PriceDisk = $Price;
    }

    function setNameDisk($Name){
        $this->NameDisk = $Name;
    }

    function getNameDisk(){
        return $this->NameDisk;
    }

    function setCapacityDisk($Capacity){
        $this->CapacityDisk = $Capacity;
    }

    function getCapacityDisk(){
        return $this->CapacityDisk;
    }

    function setPriceDisk($Price){
        $this->PriceDisk = $Price;
    }

    function getPriceDisk(){
        return $this->PriceDisk;
    }

    function print(){
        echo "Disk :" . "<br/>";
        echo "Name :" . $this->getNameDisk(). "<br/>";
        echo "Capacity (Gb) :" . $this->getCapacityDisk(). "<br/>";
        echo "Price (Rp) :" . $this->getPriceDisk(). "<br/>";
    }
}
?>