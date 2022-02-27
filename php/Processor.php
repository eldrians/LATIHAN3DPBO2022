<?php

class Processor{
    private $NameProcessor;
    private $PriceProcessor;

    function __construct($Name, $Price)
    {
        $this->NameProcessor = $Name;
        $this->PriceProcessor = $Price;
    }

    function setNameProcessor($Name){
        $this->NameProcessor = $Name;
    }

    function getNameProcessor(){
        return $this->NameProcessor;
    }

    function setPriceProcessor($Price){
        $this->PriceProcessor = $Price;
    }

    function getPriceProcessor(){
        return $this->PriceProcessor;
    }

    function print(){
        echo "Processor :" . "<br/>";
        echo "Name :" . $this->getNameProcessor(). "<br/>";
        echo "Price (Rp) :" . $this->getPriceProcessor(). "<br/>";
    }
}
?>