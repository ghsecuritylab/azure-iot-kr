# WizFi360 MQTT AT Command를 이용한 Auzre IoT Hub 연동 예제



## 목차

- [시작하기 전에](#Prerequisites)
- [소개](#Introduction)
- [Step 1: 필수 구성 요소](#Prerequisites)
- [Step 2: Device 준비](#Prepare_Device)
- [Step 3: 동작 예제](#Example)
- [Step 4: 동작 예제 결과](#Result)
- [더 보기](#Read_More)



<a name="Prerequisites"></a>
## 시작하기 전에

> [**Azure Portal**][Link-Azure-Portal]에 Login을 합니다. 계정이 없는 경우, 계정 생성 후에 Login을 진행합니다.
>
> ※ 본 문서에는 [**체험 계정**][Link-Azure-Account-Free]으로 진행합니다.
>
> Azure Portal을 사용하여 IoT Hub 만들기 등 앞선 일련의 과정에 대하여 [Azure Cloud 서비스 소개][Link-Azure_Cloud_Introduction]를 참조하시기 바랍니다.
>
> * [[MS] Azure Portal을 사용하여 IoT Hub 만들기][Link-Create_IoT_Hub_Through_Azure_Portal]
> * [Azure Portal을 사용하여 Blob Storage 만들기][Link-Create_Blob_Storage_Through_Azure_Portal]
> * [Azure Portal을 사용하여 Stream Analytics 만들기][Link-Create_Stream_Analytics_Through_Azure_Portal]
> * [Azure Portal을 사용하여 Stream Analytics 작업 입 · 출력 구성 및 변환 Query 정의][Link-Configure_Stream_Analytics_Job_Input_Output_And_Define_The_Transformation_Query_Through_Azure_Portal]
> * [WizFi360 MQTT AT Command를 이용하여 Azure IoT Hub에 연동][Link-Standalone_Mqtt_Atcmd_Wizfi360]



<a name="Introduction"></a>
## 소개

**Microsoft Azure Service**에 **WizFi360**을 **연동**하여, Data를 Cloud로 전송하고, Monitoring을 할 수 있습니다.

Data 통신은 다음과 같은 구조로 이루어집니다.

![][Link-Data_Communication_Structure]

**MQTT AT Command**를 이용하여, IoT Hub Service 연결 및 Data 송신을 합니다.

IoT Hub로 송신이 된 Data는 Stream Analytics를 통하여 Data 저장소 Blob Storage로 저장이 됩니다.

본 문서는 WizFi360 MQTT AT Command 이용한 Microsoft Azure Service 연동 예제에 대하여 Guide를 제공합니다.



<a name="Prerequisites"></a>
## Step 1: 필수 구성 요소

준비 중



<a name="Prepare_Device"></a>
## Step 2: Device 준비

준비 중


<a name="Example"></a>
## Step 3: 동작 예제

준비 중



<a name="Result"></a>
## Step 4: 동작 예제 결과

준비 중



<a name="Read_More"></a>
## 더 보기

- [WizFi360 MQTT AT Command를 이용하여 Auzre IoT Hub에 연동][Link-Standalone_Mqtt_Atcmd_Wizfi360]



[Link-Azure-Portal]: https://portal.azure.com/
[Link-Azure-Account-Free]: https://azure.microsoft.com/ko-kr/free/
[Link-Azure_Cloud_Introduction]: https://github.com/Wiznet/azure-iot-kr/tree/master/docs/Azure_Cloud
[Link-Create_IoT_Hub_Through_Azure_Portal]: https://docs.microsoft.com/ko-kr/azure/iot-hub/iot-hub-create-through-portal
[Link-Create_Blob_Storage_Through_Azure_Portal]: https://github.com/Wiznet/azure-iot-kr/blob/master/docs/Azure_Cloud/create_blob_storage_through_azure_portal.md
[Link-Create_Stream_Analytics_Through_Azure_Portal]: https://github.com/Wiznet/azure-iot-kr/blob/master/docs/Azure_Cloud/create_stream_analytics_through_azure_portal.md
[Link-Configure_Stream_Analytics_Job_Input_Output_And_Define_The_Transformation_Query_Through_Azure_Portal]: https://github.com/Wiznet/azure-iot-kr/blob/master/docs/Azure_Cloud/configure_stream_analytics_job_input_output_and_define_the_transformation_query_through_azure_portal.md
[Link-Standalone_Mqtt_Atcmd_Wizfi360]: https://github.com/Wiznet/azure-iot-kr/blob/master/docs/IoT_device/Connectivities/Wi-Fi/standalone_mqtt_atcmd_wizfi360.md
[Link-Data_Communication_Structure]: https://github.com/Wiznet/azure-iot-kr/blob/master/images/mqtt_data_communication_structure.png