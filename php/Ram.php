<?php

class Ram
{
    private $CapacityRam;
    private $PriceRam;

    function __construct($Capacity, $Price)
    {
        $this->CapacityRam = $Capacity;
        $this->PriceRam = $Price;
    }

    function setCapacityRam($Capacity)
    {
        $this->CapacityRam = $Capacity;
    }

    function getCapacityRam()
    {
        return $this->CapacityRam;
    }

    function setPriceRam($Price)
    {
        $this->PriceRam = $Price;
    }

    function getPriceRam()
    {
        return $this->PriceRam;
    }

    function print()
    {
        echo "Ram :" . "<br/>";
        echo "Capacity (Gb) :" . $this->getCapacityRam() . "<br/>";
        echo "Price (Rp) :" . $this->getPriceRam() . "<br/>";
    }
}
?>