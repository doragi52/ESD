## TinyML: Tensorflow lite for microcontroller - Mobility


### 프로젝트명



- Watching U
  - Helmet Detection for mobility   
   
   
### 프로젝트 개요   



- 이 프로젝트는 전동킥보드 탑승자의 헬멧 착용 여부를 탐지하고, 착용하지 않은 경우 경고 알람을 내보내는 디바이스를 만드는 프로젝트입니다.



- 헬멧 미착용 상태로 전동 킥보드를 탑승하는 것이 안전상의 이슈로 커져가고 있는 현 상황에서,  
  각각의 개별적인 킥보드를 단속하기 힘들다는 문제를 해결하기 위해 고안되었습니다.
  - reference 기사 필요시 넣기



- 디바이스 카메라에 헬멧 미착용 여부가 탐지되면, "헬멧을 쓰세요" 라는 음성이 출력되고,  
  헬멧을 착용한 것으로 판단되면, "헬멧을 잘 쓰셨군요"라는 음성이 출력됩니다.


  
<br>
<br>
### 개발 환경 및 부품



- 개발 환경

  - OS : Raspbian Linux

  - python 3.7 higher 버전이 필요
<br>
- 사용 부품
  - Raspberry Pi Model : Raspberry Pi 4 B 1GB RAM
  - Memory : 32GB sd card
  - Camera : RPI NOIR CAMERA BOARD
  - Speaker : LeadSound F10 portable speaker
  - (Option) Accelerator : coral USB accelerator



<br>
<br>
### 진행 과정

- Tensorflow-lite Model

  - 데이터 준비 및 전처리 (코랩 연결 링크)

    - 데이터 링크
      - 데이터 reference
        - 헬멧 data
        - non 헬멧 data
      - 간단한 설명
      - 더 자세한 설명을 원하시면 이 곳을 클릭해주세요

  - 모델 학습 및 tflite 변환 (코랩 연결 링크)

    - 간단한 설명

    
<br>
- 라즈베리파이 (README 링크)

  - 개발환경 설정
    - 간단한 설명
  - 헬멧 탐지 및 음성 출력 코드 작성
    - 간단한 설명
  - (Option) Google Coral accelerator 연결 및 설치
    - 간단한 설명


