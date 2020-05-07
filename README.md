# LabyrinthCore

![LabyrinthCore画像](https://soramame-games.com/wp-content/uploads/2020/05/labyrinthcore_002.jpg)


## はじめに

LabyrinthCoreは そらまめゲームスが開発中のスマートフォン向け3D脱出ゲーム「Labyrinth(仮題)」のUE4プロジェクトのうち、ゲームシステムやキャラクター周りのみを取り出したUE4プロジェクトです。

このプロジェクトは今後Labyrinthの本編プロジェクトにも実際に組み込んで運用していきます。

詳細はこちらをご確認ください。

[LabyrinthのUE4プロジェクト公開に関するお知らせ](https://soramame-games.com/about-labyrinth-ue4)

## ターゲットプラットフォーム

このプロジェクトはスマートフォン向けに開発しています。

そのため、実装内容もスマートフォンでの動作を優先して制作しています。

## 動かし方

スマホ縦持ちを想定していますので、実行時のウィンドウサイズを縦長に指定することをお勧めします。

[編集]＞[エディタの環境設定]＞[レベルエディタ]＞[プレイ]＞[Game Viewport Settings]＞[New Viewport Resolution]

Viewport Width : 375  
Viewport Heigh : 667  
（フルHDモニタでの設定例）

Viewport Width : 828  
Viewport Heigh : 1792  
（4kモニタでの設定例）

### テストマップ

* LabyrinthCoreTest > GimmickTest > GimmickTest  
  ギミックの挙動を確認するマップ
* LabyrinthCoreTest > GameFlowTest > GameFlowTest  
  ゲームフローやマップのストリーミングの挙動を確認するマップ
* LabyrinthCoreTest > GimmickTest > PickupTest  
  アイテムを拾って入手する挙動を確認するマップ
  
### 基本操作

#### 通常時

* 左クリック ・・・ 対象を調べる（地面をクリックした場合はその地点へ移動）
* 左クリックしたまま動かす ・・・ カメラ操作

#### 調査時

* 左クリック ・・・ 対象を調べる
* 左クリックと右クリックしたまま動かす ・・・ カメラ操作

### 実行方法

[新規エディタウィンドウ]でプレイして下さい。

## 動作環境

UE4.24.3

対応バージョンを更新するたびに、この部分の記載も更新します。

## ライセンス

MIT

## 作者

[そらまめゲームス@SoramameGames](https://twitter.com/SoramameGames)
