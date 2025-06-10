Wi-Fi
표준: IEEE 802.11

구성:
AP(공유기), STA(노트북, 스마트폰 등)
Service Set:
BSS: AP + STA, BSS-ID = AP MAC
Ad hoc: AP 없이 직접 통신
Infra: AP 통해 통신
ESS: 여러 BSS 연결
MAC 방식:
PCF: 중앙(Polling)
DCF: 분산(CSMA/CA)

CSMA/CA:

CS: 채널 확인
MA: 비면 사용
CA: 충돌 회피 (RTS/CTS)
CD: 유선 충돌 감지
Hidden Terminal 문제 존재

Zigbee
표준: IEEE 802.15.4
주파수: 3밴드, 27채널
방식: DSSS
장치 유형:
NC(코디네이터), FFD(전체 기능), RFD(간단 기능)

통신:

Beacon: 슬롯 기반 (Slotted CSMA-CA)
Non-Beacon: 비슬롯, 응답 확인
슈퍼프레임:
최대 16슬롯
Beacon → CAP(경쟁) → CFP(비경쟁, 0~7슬롯)

