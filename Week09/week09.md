라즈베리파이 OS 설치 및 초기 설정 가이드

1. Raspberry Pi Imager 설치 및 OS 선택
• 먼저 공식 웹사이트에서 Raspberry Pi Imager를 다운로드하고 설치
• 장치는 Raspberry Pi 3, 운영체제는 Raspberry Pi OS (32-bit) 버전을 선택


• 2. 시스템 업데이트
• OS 설치 후, 터미널을 열어 시스템을 최신 상태로 업데이트
• sudo apt update
• sudo apt upgrade
• 

3. 한글 환경 설정
부팅 시 초기 언어는 영어로 설정하고, 한글 입력 및 폰트 문제 해결을 위해 다음 명령어를 실행
sudo apt-get install fonts-unfonts-core -y
sudo apt-get install ibus ibus-hangul -y
sudo reboot

