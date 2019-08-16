= はじめに

//flushright{

2019年9月
mochikoAsTech

//}

この本を手に取ってくださったあなた、はじめまして。
「DNSをはじめよう」の筆者、mochikoAsTechです。

本著は2018年4月の技術書典4で初版を出して以来、2019年8月までの約1年半で3,600冊ほどが読者の皆さんのところへ旅立っていきました。さらに続編となる「AWSをはじめよう」も合わせると、お陰さまで頒布数の累計は7,800冊以上となりました。

「100冊完売できたらすごい！」と言われる同人誌の世界で、本著がこんなに手に取ってもらえた理由はいくつか挙げられますが、その中で最も大きいものとして、実は多くの人が心ひそかに「DNSとかAWSとかよく分からない…インフラ怖い…でも分かりたい！」と感じていた、という背景があると筆者は思っています。

技術を学ぶ過程は単純な右肩上がりの一直線ではなく、「分かった！」「やっぱり分かってなかった…」という山と谷の繰り返しです。筆者も本著を書いたことで何度目かの「DNS何も分からない…」という谷間を迎えました。谷は暗く、とても恐ろしく感じられます。みんなが当たり前に知っていることを、自分ただひとりだけが分かっていないように感じられ、今更学んでもとても追いつけないと焦ったり諦めたり…何より情けなくて無知な自分を周囲に知られたくない、という気持ちになります。

ですが安心してください。技術書典を訪れたたくさんのエンジニアの中で、DNSが分かっていなかったのは筆者だけでもあなただけでもありません。少なくとも3,600人が「DNS何も分からない…」と本著を手に取ったのです。

自分以外にも分かっていない人はいっぱいいたんだ、と思うと、ちょっとほっとしませんか？不安な気持ちで心に蓋をしていると、新しい知識はあなたの中になかなか入ってきません。楽しい話をしましょう。

本著を手に取ったあなた、DNSは好きですか？筆者はDNSが大好きです！なぜか分からないけど、DNS絡みの障害が起きたニュースを見てはわくわくして勝手に調査してしまうし、DNSのことで困っている人がいると解説したくてうずうずします。

普段、システムの開発や運用をしているWebアプリケーションエンジニアを料理人に例えると、インフラエンジニアは台所そのものを作るのが仕事です。料理人は料理を作るのは得意でいつも台所にいますが、台所そのものの作り方まで詳しいか？というと、必ずしもそうとは言えません。（もちろん家の建て方から、料理から、テーブルコーディネイトから、後片付けまで全部出来るフルスタックなエンジニアもいますが、みんながみんなそうではなく分担しあって頑張っていますよね）

台所の造りに詳しくなくても料理は作れます。ですが台所の造りに詳しいと、困ったときに「自分でなんとかできる範囲」が広がります。たとえばシンクの蛇口から水漏れして台所が水浸しになっても、水道管や蛇口のことをある程度知っていれば、先ずは元栓を閉める応急処置をしたり、あるいはパッキンを自分で交換して直すこともできます。修理を頼んだ場合でも、修理業者の説明が理解できるので金額の妥当性もちゃんと判断できます。

DNSは水道管のように地味なインフラです。蛇口を捻れば水が出るのは当たり前なのと同じように、ドメイン名を聞けばIPアドレスが返ってくるのは当たり前で意識されることすらありません。ですがひとたびDNSで問題があれば、サイトは見られなくなり、メールは送れなくなり、水道が止まったのと同じくらい影響範囲の大きい障害となります。

筆者はインフラエンジニアを経験した後、Webアプリケーションエンジニアへジョブチェンジしたので、インフラの知識が土台としてあったことでその上にアプリケーションの知識が載せやすく「この順番で学んでおいてよかったな」と思う場面が多々ありました。本著「DNSをはじめよう」はそんな筆者が、普段開発や運用をしているエンジニアに「DNSのことを知っておくと自分でなんとか出来る範囲が広がるよ」と伝えたくて書いた一冊です。

「自分はDNSを知らない。よく分かっていない」と素直に認めることは、理解に向かう階段のはじめの一歩です。一緒に「分かった！」の山と「やっぱり分かってなかった…」の谷を越えて、ゆっくりDNSを好きになっていきましょう。

== 想定する読者層

この本は、こんな人に向けて書かれています。

 * これからシステムやプログラミングを学ぼうと思っている新人
 * ウェブ系で開発や運用をしているアプリケーションエンジニア
 * 「インフラがよく分からないこと」にコンプレックスのある人
 * ドメインを買ったりするけどDNSはあまり分かっていない人
 * ブログやポートフォリオサイトを独自ドメインで作ってみたい人
 * AWSやRoute53という単語に興味のある人

== マッチしない読者層

この本は、こんな人が読むと恐らく「not for meだった…（私向けじゃなかった）」となります。

 * BINDをインストールしてネームサーバやフルリゾルバの運用をはじめたい人
 * named.confの推奨設定を知りたい人
 * フルリゾルバをBINDからUnboundに移行したい人
 * ISP（インターネットサービスプロバイダ）やクラウド事業者の中でDNSのお守りをしている人
 * ネームサーバやフルリゾルバの運用トラブル事例を知りたい人

== この本の特徴

この本では実際にドメインを1つ購入します。買ったドメインを使って手を動かして試しながら学べるので理解がしやすく、インフラ初心者でも安心して読み進められる内容です。

また実際にありがちなトラブルをとり上げて、

 * こんな障害が起きたら原因はどう調べたらいいのか？
 * 問題をどう解決したらいいのか？
 * どうしたら事前に避けられるのか？

を解説するとともに、実際にコマンドを叩いて反復学習するためのドリルもついています。

== この本のゴール

この本を読み終わると、あなたはこのような状態になっています。

 * ドメインを買うときは何に注意してどこで買ったらいいか分かっている
 * Whois情報に何を登録すべきか分かっている
 * 障害が起きたときに黒い画面（ターミナル）でdigコマンドやwhoisコマンドを駆使して原因を調査できる
 * サイト移管時に「DNS浸透待ちで8～24時間くらいは切り替わりません」みたいなことを言わない
 * 読む前よりDNSが好きになっている

== 免責事項

本著に記載されている内容は筆者の所属する組織の公式見解ではありません。

また本著はできるだけ正確を期すように努めましたが、筆者が内容を保証するものではありません。よって本著の記載内容に基づいて読者が行った行為、及び読者が被った損害について筆者は何ら責任を負うものではありません。

不正確あるいは誤認と思われる箇所がありましたら、必要に応じて適宜改訂を行いますのでGitHubのIssueやPull requestで筆者までお知らせいただけますと幸いです。

@<href>{https://github.com/mochikoAsTech/startDNS}
