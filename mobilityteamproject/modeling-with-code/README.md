# Step2 : 모델 작성, 학습, 평가, 개선, 저장

2-1-helmet_classification_for_tinyMLproject_part1.ipynb

2-2-helmet_classification_for_tinyMLproject_part2.ipynb

2-3-helmet_classification_for_tinyMLproject_part3.ipynb

### 2-1-helmet_classification_for_tinyMLproject_part1.ipynb

- 2-1 을 진행하기 위해 필요한 것들
    - 헬멧 착용 데이터2 : <파일명>
    - 헬멧 미착용 데이터2 : <파일명>
- 2-1 을 마치면 나오는 결과물
    - 작업 경로 파일 : <파일명>
- 여기서 무엇을 하나요?
    - Google Drive 와 Google Colab 을 연동시켜 데이터를 불러옵니다.
    - 데이터의 개수를 조정하고, 우리가 만들 모델에 이미지를 넣을 준비를 합니다.
    - 준비를 할 때, 데이터를 요리조리 변형시키면서 다양한 데이터를 입력시키기 위해 노력합니다.
    - tf.keras 에 내장되어 있는 mobilenet v2 모델을 가져오고, 정의해둔 설정을 통해 학습을 수행합니다.
    - Callback : 한 번 training 을 시작하면 에폭수, 데이터의 양, 모델의 크기, 하드웨어의 사양에 따라 짧게는 10분 길게는 몇 달동안 학습이 지속되곤 합니다. 그동안 사람이 모델과 상호작용하는 방법에 대해서 간단히 tensorboard  라는 것을 소개합니다. Callback 이란, 특정 시점이 될 때 실행하도록 특정 시점마다 "등록" 해 두는것을 의미합니다. Tensorboard Callback 을 등록하는 소스코드가 포함되어 있습니다.
- 어려운 점이 무엇인가요?
    - keras 에 대한 기본적인 개념을 잘 알고 있지 못하다면 어려울 수 있습니다.
    - 딥러닝에 익숙하지 않은 분들은, 많은 하이퍼파라미터들의 종류들에 익숙하지 않을 수 있습니다.
    - 
- 결과물은 어떻게 생성되나요?
    - (a) keras 모델 파일은 h5 형식으로 쉽게 저장이 가능합니다. 이때, 모델에 학습된 가중치를 모두 담아 함께 저장할 수 있습니다. 우리가 만들고 학습시킨 모델이 포함되어 있습니다.
    - (b) classification 을 포함한 다양한 문제들을 풀 때, 어떤 결과가 무엇인지 이해하는 데 필요한 파일 (예를 들어, 0번 클래스가 많이 활성화된 것은 헬멧을 착용한 클래스가 많이 활성화되었다는 것이고, 1번 클래스가 많이 활성화된 것은 헬멧을 착용하지 않은 클래스가 많이 활성화되었다는 뜻) 이 포함되어 있습니다.
    - (c) 헬멧 착용 데이터 파일2 (Step1-1 결과물) 에서 해상도가 비교적 크기가 큰 이미지 crop 들만 남아 있는 상태로 바뀐 helmet 데이터셋이 포함되어 있습니다. 이때, train 데이터와 test 데이터도 분리되어 있는 상태입니다.
    - (d) 헬멧 미착용 데이터 파일2 (Step1-1 결과물) 이 포함되어 있지만, Step1-1 의 결과물의 모든 하위 디렉터리의 파일들이 전부 train 데이터와 test 데이터로 분리되어 있는 상태입니다.
    - (a) ~ (d) 가 모두 포함되어 압축되어 있는 파일입니다.

### 2-2-helmet_classification_for_tinyMLproject_part2.ipynb

- 2-2 을 진행하기 위해 필요한 것들
- 2-2 을 마치면 나오는 결과물
- 어려운 점이 무엇인가요?
    - 모델을 직접적으로 쌓는 부분이 들어가 있습니다. keras 의 functional API 라는 것을 중심적으로 활용합니다. 중간중간 오류상황을 방지하기 위한 decorator 문법도 들어가 있지요.
    - 차근차근 진행하시는 분들께, 어려운 내용일 것이라고 예상합니다. 그렇다면, 모델을 이렇게 쌓는구나! 정도만 이해하고 넘어가 주세요. 다시 공부할 필요가 있을 때 유용하게 사용될 수 있는 코드일 것입니다.
- 결과물은 어떻게 생성되나요?

### 2-3-helmet_classification_for_tinyMLproject_part1.ipynb

- 2-3 을 진행하기 위해 필요한 것들
- 2-3 을 마치면 나오는 결과물
- 어려운 점이 무엇인가요?
- 결과물은 어떻게 생성되나요?

- tensorflow 모델 만들기
    - 연관 파일 1-2-
    - 연관 파일 1-3-
    - 연관 파일
    - teachable machine
        - [teachable machine 페이지 링크](https://teachablemachine.withgoogle.com/train)
        - [결과파일 링크](https://drive.google.com/drive/u/0/folders/1HNxIY8bJfM3V29yvG2_W32y51BIH3PQJ)
    - 직접 keras 로 구현
        - [결과물 코드 Github 링크](https://github.com/tinyml-mobility/modeling-with-code/blob/master/helmet_classification_for_tinyMLproject_part2.ipynb)
    - 위 모델을 tflite로 변환
        - 변환하는 코드
