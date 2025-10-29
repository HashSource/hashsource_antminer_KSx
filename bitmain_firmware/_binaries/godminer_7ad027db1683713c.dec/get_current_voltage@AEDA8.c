int get_current_voltage()
{
  if ( byte_2D3540 )
    return dword_2D355C;
  else
    return sub_AE708();
}
