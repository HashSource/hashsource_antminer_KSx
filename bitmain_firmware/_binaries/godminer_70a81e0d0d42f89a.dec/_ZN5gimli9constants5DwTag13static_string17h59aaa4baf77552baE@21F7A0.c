void *__fastcall gimli::constants::DwTag::static_string(unsigned __int16 *a1)
{
  int v1; // r3
  void *result; // r0
  void *v3; // r12

  v1 = *a1;
  result = 0;
  if ( v1 <= 16511 )
  {
    v3 = &unk_2AF286;
    switch ( v1 )
    {
      case 0:
        return v3;
      case 1:
        return &unk_2AF275;
      case 2:
        return &unk_2AF264;
      case 3:
        return &unk_2AF252;
      case 4:
        return &unk_2AF23B;
      case 5:
        return &unk_2AF224;
      case 8:
        return &unk_2AF209;
      case 10:
        return &unk_2AF1FD;
      case 11:
        return &unk_2AF1E9;
      case 13:
        return &unk_2AF1DC;
      case 15:
        return &unk_2AF1C9;
      case 16:
        return &unk_2AF1B4;
      case 17:
        return &unk_2AF1A1;
      case 18:
        return &unk_2AF18F;
      case 19:
        return &unk_2AF17A;
      case 21:
        return &unk_2AF164;
      case 22:
        return &unk_2AF156;
      case 23:
        return &unk_2AF145;
      case 24:
        return &unk_2AF128;
      case 25:
        return &unk_2AF11A;
      case 26:
        return &unk_2AF107;
      case 27:
        return &unk_2AF0F0;
      case 28:
        return &unk_2AF0DE;
      case 29:
        return &unk_2AF0C5;
      case 30:
        return &unk_2AF0B8;
      case 31:
        return &unk_2AF09F;
      case 32:
        return &unk_2AF090;
      case 33:
        return &unk_2AF07C;
      case 34:
        return &unk_2ACC0C;
      case 35:
        return &unk_2AF063;
      case 36:
        return &unk_2ACBFC;
      case 37:
        return &unk_2AF051;
      case 38:
        return &unk_2AF040;
      case 39:
        return &unk_2AF031;
      case 40:
        return &unk_2AF020;
      case 41:
        return &unk_2ACBEC;
      case 42:
        return &unk_2AF013;
      case 43:
        return &unk_2AF004;
      case 44:
        return &unk_2AEFF0;
      case 45:
        return &unk_2AEFDE;
      case 46:
        return &unk_2AEFCD;
      case 47:
        return &unk_2AEFAF;
      case 48:
        return &unk_2AEF90;
      case 49:
        return &unk_2AEF7E;
      case 50:
        return &unk_2ACBDC;
      case 51:
        return &unk_2AEF6B;
      case 52:
        return &unk_2AEF5C;
      case 53:
        return &unk_2AEF48;
      case 54:
        return &unk_2AEF32;
      case 55:
        return &unk_2AEF1E;
      case 56:
        return &unk_2AEF09;
      case 57:
        return &unk_2ACBCC;
      case 58:
        return &unk_2AEEF3;
      case 59:
        return &unk_2AEEDC;
      case 60:
        return &unk_2AEEC9;
      case 61:
        return &unk_2AEEB5;
      case 63:
        return &unk_2ACBBC;
      case 64:
        return &unk_2AEEA3;
      case 65:
        return &unk_2ACBAC;
      case 66:
        return &unk_2AEE87;
      case 67:
        return &unk_2AEE72;
      case 68:
        return &unk_2AEE5F;
      case 69:
        return &unk_2AEE48;
      case 70:
        return &unk_2AEE35;
      case 71:
        return &unk_2AEE23;
      case 72:
        return &unk_2ACB9C;
      case 73:
        return &unk_2AEE09;
      case 74:
        return &unk_2AEDF5;
      case 75:
        return &unk_2AEDE0;
      default:
        return result;
    }
    return result;
  }
  if ( v1 <= 20736 )
  {
    switch ( v1 )
    {
      case 16512:
        return &unk_2AEDD2;
      case 16513:
        return &unk_2ACB8C;
      case 16514:
      case 16515:
      case 16516:
      case 16517:
      case 16518:
      case 16519:
      case 16520:
      case 16521:
      case 16522:
      case 16523:
      case 16524:
      case 16525:
      case 16526:
      case 16527:
      case 16531:
      case 16532:
      case 16533:
      case 16534:
      case 16535:
      case 16536:
      case 16537:
      case 16538:
      case 16539:
      case 16540:
      case 16541:
      case 16542:
      case 16543:
      case 16544:
      case 16545:
      case 16546:
      case 16547:
      case 16548:
      case 16549:
      case 16550:
      case 16551:
      case 16552:
      case 16553:
      case 16554:
      case 16555:
      case 16556:
      case 16557:
      case 16558:
      case 16559:
      case 16560:
      case 16561:
      case 16562:
      case 16563:
      case 16564:
      case 16565:
      case 16566:
      case 16567:
      case 16568:
      case 16569:
      case 16570:
      case 16571:
      case 16572:
      case 16573:
      case 16574:
      case 16575:
      case 16576:
      case 16577:
      case 16578:
      case 16579:
      case 16580:
      case 16581:
      case 16582:
      case 16583:
      case 16584:
      case 16585:
      case 16586:
      case 16587:
      case 16588:
      case 16589:
      case 16590:
      case 16591:
      case 16592:
      case 16593:
      case 16594:
      case 16595:
      case 16596:
      case 16597:
      case 16598:
      case 16599:
      case 16600:
      case 16601:
      case 16602:
      case 16603:
      case 16604:
      case 16605:
      case 16606:
      case 16607:
      case 16608:
      case 16609:
      case 16610:
      case 16611:
      case 16612:
      case 16613:
      case 16614:
      case 16615:
      case 16616:
      case 16617:
      case 16618:
      case 16619:
      case 16620:
      case 16621:
      case 16622:
      case 16623:
      case 16624:
      case 16625:
      case 16626:
      case 16627:
      case 16628:
      case 16629:
      case 16630:
      case 16631:
      case 16632:
      case 16633:
      case 16634:
      case 16635:
      case 16636:
      case 16637:
      case 16638:
      case 16639:
      case 16640:
        return result;
      case 16528:
        return &unk_2AEDAA;
      case 16529:
        return &unk_2AED95;
      case 16530:
        return &unk_2AED7C;
      case 16641:
        return &unk_2AED69;
      case 16642:
        return &unk_2AED51;
      case 16643:
        return &unk_2AED3C;
      case 16644:
        return &unk_2ACB7C;
      case 16645:
        return &unk_2ACB6C;
      case 16646:
        return &unk_2AED1A;
      case 16647:
        return &unk_2AECF8;
      case 16648:
        return &unk_2AC764;
      case 16649:
        return &unk_2AECE4;
      case 16650:
        return &unk_2AECC6;
      default:
        switch ( v1 )
        {
          case 16896:
            return &unk_2AECB1;
          case 16897:
            return &unk_2AEC95;
          case 16898:
            return &unk_2AEC7C;
          case 16899:
            return &unk_2AEC62;
          case 16900:
            return &unk_2AEC49;
          case 16901:
            return &unk_2AEC2A;
          case 16902:
            return &unk_2AEC16;
          case 16903:
            return &unk_2AEC01;
          case 16904:
            return &unk_2AEBE8;
          case 16905:
            return &unk_2AEBCE;
          case 16906:
            return &unk_2AEBBA;
          case 16907:
            return &unk_2AEBAB;
          case 16908:
            return &unk_2AEB93;
          case 16909:
            return &unk_2AC744;
          default:
            return result;
        }
    }
    return result;
  }
  if ( v1 > 40991 )
  {
    switch ( v1 )
    {
      case 45056:
        return &unk_2AEAAB;
      case 45057:
        return &unk_2AEA8F;
      case 45058:
        return &unk_2AEA6C;
      case 45059:
        return &unk_2AEA53;
      case 45060:
        return &unk_2AEA36;
      default:
        if ( v1 == 40992 )
        {
          v3 = &unk_2AEAC2;
        }
        else
        {
          if ( v1 != 0xFFFF )
            return result;
          v3 = &unk_2AEDC4;
        }
        break;
    }
    return v3;
  }
  if ( v1 > 34660 )
  {
    if ( v1 > 34662 )
    {
      if ( v1 == 34663 )
      {
        return &unk_2AEAF1;
      }
      else
      {
        if ( v1 != 40960 )
          return result;
        return &unk_2AEADC;
      }
    }
    else if ( v1 == 34661 )
    {
      return &unk_2AEB1E;
    }
    else
    {
      return &unk_2AEB08;
    }
  }
  switch ( v1 )
  {
    case 20737:
      return &unk_2AEB7C;
    case 20738:
      return &unk_2AEB61;
    case 20739:
      return &unk_2AEB45;
    case 20753:
      return &unk_2AEB34;
    default:
      return result;
  }
  return result;
}
