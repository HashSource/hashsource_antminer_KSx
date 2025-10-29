int get_total_nonce_rate()
{
  int v0; // r4
  int result; // r0
  float v2; // s16
  int v3; // [sp+0h] [bp-Ch] BYREF
  float v4; // [sp+4h] [bp-8h] BYREF

  v0 = 0;
  v3 = 0;
  get_all_created_runtime(&v3);
  result = is_eeprom_loaded();
  if ( result && v3 > 0 )
  {
    v2 = 0.0;
    do
    {
      v4 = 0.0;
      result = api_get_eeprom_nonce_response_rate(v0++, &v4);
      if ( !result )
        v2 = v2 + v4;
    }
    while ( v3 > v0 );
  }
  return result;
}
