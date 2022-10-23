void Conecting2wifi()
{
    char *SSID = "ชื่อ wifi";
    char *PASSWORD = "รหัสผ่าน";
    
    Serial.begin(115200) // 9600
    Serial.println("Start");
    WIFI.begin(SSID, PASSWORD);
    while (WIFI.status() != WL_CONNECTED)
    {
       delay(300); 
       Serial.print(".");
    }
    Serial.println()
    Serial.println("WIFI Connected");
    Serial.print("IP address = ");
    Serial.println(WiFi.localIP());
}
