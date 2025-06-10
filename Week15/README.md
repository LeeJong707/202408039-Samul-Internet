Week 15 - Raspberry Pi 3 환경 설정 및 Zigbee 센서 연동
관련 파일: week10 폴더에 정리됨

Raspberry Pi 3 설정

설치 항목
TinyOS
NesC
InfluxDB

Zigbee 노드를 이용한 온습도 데이터 수신
노드 구성
Zigbee 통신을 위해 최소 두 개의 노드 필요
송신 노드: 센서에 연결되어 측정값을 읽고 전송
수신 노드: 송신된 데이터를 받아 처리
센서 데이터를 무선으로 수집하려면 송수신 역할을 나누는 구조가 필수.

