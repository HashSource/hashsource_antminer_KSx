bool __fastcall gimli::arch::X86_64::name_to_register(_WORD *s1, int a2)
{
  _BOOL4 result; // r0

  switch ( a2 )
  {
    case 2:
      switch ( *s1 )
      {
        case 0x3872:
          result = 1;
          break;
        case 0x3972:
          result = 1;
          break;
        case 0x4152:
          result = 1;
          break;
        case 0x7365:
          result = 1;
          break;
        case 0x7363:
          result = 1;
          break;
        case 0x7373:
          result = 1;
          break;
        case 0x7364:
          result = 1;
          break;
        case 0x7366:
          result = 1;
          break;
        case 0x7367:
          result = 1;
          break;
        case 0x7274:
          result = 1;
          break;
        case 0x306B:
          result = 1;
          break;
        case 0x316B:
          result = 1;
          break;
        case 0x326B:
          result = 1;
          break;
        case 0x336B:
          result = 1;
          break;
        case 0x346B:
          result = 1;
          break;
        case 0x356B:
          result = 1;
          break;
        case 0x366B:
          result = 1;
          break;
        default:
          result = bcmp(s1, aK7, 2u) == 0;
          break;
      }
      break;
    case 3:
      if ( bcmp(s1, aRax, 3u) )
      {
        if ( bcmp(s1, aRdx, 3u) )
        {
          if ( bcmp(s1, aRcx, 3u) )
          {
            if ( !bcmp(s1, aRbx, 3u) )
              goto LABEL_90;
            if ( bcmp(s1, aRsi, 3u) )
            {
              if ( bcmp(s1, aRdi, 3u) )
              {
                if ( bcmp(s1, aRbp, 3u) )
                {
                  if ( bcmp(s1, aRsp, 3u) )
                  {
                    if ( bcmp(s1, aR10_0, 3u) )
                    {
                      if ( bcmp(s1, aR11_0, 3u) )
                      {
                        if ( bcmp(s1, aR12_0, 3u) )
                        {
                          if ( bcmp(s1, aR13_0, 3u) )
                          {
                            if ( bcmp(s1, aR14_0, 3u) )
                            {
                              if ( bcmp(s1, aR15_0, 3u) )
                              {
                                if ( bcmp(s1, aSt0, 3u) )
                                {
                                  if ( bcmp(s1, aSt1, 3u) )
                                  {
                                    if ( bcmp(s1, aSt2, 3u) )
                                    {
                                      if ( bcmp(s1, aSt3, 3u) )
                                      {
                                        if ( bcmp(s1, aSt4, 3u) )
                                        {
                                          if ( bcmp(s1, aSt5, 3u) )
                                          {
                                            if ( bcmp(s1, aSt6, 3u) )
                                            {
                                              if ( bcmp(s1, aSt7, 3u) )
                                              {
                                                if ( bcmp(s1, aMm0, 3u) )
                                                {
                                                  if ( bcmp(s1, aMm1, 3u) )
                                                  {
                                                    if ( bcmp(s1, aMm2, 3u) )
                                                    {
                                                      if ( bcmp(s1, aMm3, 3u) )
                                                      {
                                                        if ( bcmp(s1, aMm4, 3u) )
                                                        {
                                                          if ( bcmp(s1, aMm5, 3u) )
                                                          {
                                                            if ( bcmp(s1, aMm6, 3u) )
                                                            {
                                                              if ( bcmp(s1, aMm7, 3u) )
                                                              {
                                                                if ( bcmp(s1, aFcw, 3u) )
                                                                {
                                                                  if ( bcmp(s1, aFsw, 3u) )
                                                                    goto LABEL_93;
                                                                  result = 1;
                                                                }
                                                                else
                                                                {
                                                                  result = 1;
                                                                }
                                                              }
                                                              else
                                                              {
                                                                result = 1;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              result = 1;
                                                            }
                                                          }
                                                          else
                                                          {
                                                            result = 1;
                                                          }
                                                        }
                                                        else
                                                        {
                                                          result = 1;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        result = 1;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      result = 1;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    result = 1;
                                                  }
                                                }
                                                else
                                                {
                                                  result = 1;
                                                }
                                              }
                                              else
                                              {
                                                result = 1;
                                              }
                                            }
                                            else
                                            {
                                              result = 1;
                                            }
                                          }
                                          else
                                          {
                                            result = 1;
                                          }
                                        }
                                        else
                                        {
                                          result = 1;
                                        }
                                      }
                                      else
                                      {
                                        result = 1;
                                      }
                                    }
                                    else
                                    {
                                      result = 1;
                                    }
                                  }
                                  else
                                  {
                                    result = 1;
                                  }
                                }
                                else
                                {
                                  result = 1;
                                }
                              }
                              else
                              {
                                result = 1;
                              }
                            }
                            else
                            {
                              result = 1;
                            }
                          }
                          else
                          {
                            result = 1;
                          }
                        }
                        else
                        {
                          result = 1;
                        }
                      }
                      else
                      {
                        result = 1;
                      }
                    }
                    else
                    {
                      result = 1;
                    }
                  }
                  else
                  {
                    result = 1;
                  }
                }
                else
                {
                  result = 1;
                }
              }
              else
              {
                result = 1;
              }
            }
            else
            {
              result = 1;
            }
          }
          else
          {
            result = 1;
          }
        }
        else
        {
          result = 1;
        }
      }
      else
      {
        result = 1;
      }
      break;
    case 4:
      switch ( *(_DWORD *)s1 )
      {
        case 0x306D6D78:
          result = 1;
          break;
        case 0x316D6D78:
          result = 1;
          break;
        case 0x326D6D78:
          result = 1;
          break;
        case 0x336D6D78:
          result = 1;
          break;
        case 0x346D6D78:
          result = 1;
          break;
        case 0x356D6D78:
          result = 1;
          break;
        case 0x366D6D78:
          result = 1;
          break;
        case 0x376D6D78:
          result = 1;
          break;
        case 0x386D6D78:
          result = 1;
          break;
        case 0x396D6D78:
          result = 1;
          break;
        case 0x7274646C:
          result = 1;
          break;
        default:
          goto LABEL_93;
      }
      break;
    case 5:
      if ( bcmp(s1, aXmm10, 5u) )
      {
        if ( bcmp(s1, aXmm11, 5u) )
        {
          if ( bcmp(s1, aXmm12, 5u) )
          {
            if ( bcmp(s1, aXmm13, 5u) )
            {
              if ( bcmp(s1, aXmm14, 5u) )
              {
                if ( bcmp(s1, aXmm15, 5u) )
                {
                  if ( bcmp(s1, aMxcsr, 5u) )
                  {
                    if ( bcmp(s1, aXmm16, 5u) )
                    {
                      if ( bcmp(s1, aXmm17, 5u) )
                      {
                        if ( bcmp(s1, aXmm18, 5u) )
                        {
                          if ( bcmp(s1, aXmm19, 5u) )
                          {
                            if ( bcmp(s1, aXmm20, 5u) )
                            {
                              if ( bcmp(s1, aXmm21, 5u) )
                              {
                                if ( bcmp(s1, aXmm22, 5u) )
                                {
                                  if ( bcmp(s1, aXmm23, 5u) )
                                  {
                                    if ( bcmp(s1, aXmm24, 5u) )
                                    {
                                      if ( bcmp(s1, aXmm25, 5u) )
                                      {
                                        if ( bcmp(s1, aXmm26, 5u) )
                                        {
                                          if ( bcmp(s1, aXmm27, 5u) )
                                          {
                                            if ( bcmp(s1, aXmm28, 5u) )
                                            {
                                              if ( bcmp(s1, aXmm29, 5u) )
                                              {
                                                if ( bcmp(s1, aXmm30, 5u) )
                                                {
                                                  if ( bcmp(s1, aXmm31, 5u) )
                                                    goto LABEL_93;
                                                  result = 1;
                                                }
                                                else
                                                {
                                                  result = 1;
                                                }
                                              }
                                              else
                                              {
                                                result = 1;
                                              }
                                            }
                                            else
                                            {
                                              result = 1;
                                            }
                                          }
                                          else
                                          {
                                            result = 1;
                                          }
                                        }
                                        else
                                        {
                                          result = 1;
                                        }
                                      }
                                      else
                                      {
                                        result = 1;
                                      }
                                    }
                                    else
                                    {
                                      result = 1;
                                    }
                                  }
                                  else
                                  {
                                    result = 1;
                                  }
                                }
                                else
                                {
                                  result = 1;
                                }
                              }
                              else
                              {
                                result = 1;
                              }
                            }
                            else
                            {
                              result = 1;
                            }
                          }
                          else
                          {
                            result = 1;
                          }
                        }
                        else
                        {
                          result = 1;
                        }
                      }
                      else
                      {
                        result = 1;
                      }
                    }
                    else
                    {
                      result = 1;
                    }
                  }
                  else
                  {
                    result = 1;
                  }
                }
                else
                {
                  result = 1;
                }
              }
              else
              {
                result = 1;
              }
            }
            else
            {
              result = 1;
            }
          }
          else
          {
            result = 1;
          }
        }
        else
        {
          result = 1;
        }
      }
      else
      {
        result = 1;
      }
      break;
    case 6:
      if ( bcmp(s1, aRflags, 6u) )
        goto LABEL_93;
LABEL_90:
      result = 1;
      break;
    case 7:
      if ( bcmp(s1, aFsBase, 7u) )
      {
        if ( bcmp(s1, aGsBase, 7u) )
          goto LABEL_93;
        result = 1;
      }
      else
      {
        result = 1;
      }
      break;
    default:
LABEL_93:
      result = 0;
      break;
  }
  return result;
}
