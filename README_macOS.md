# ThoughtfishCoalaPlugin macOS対応版

このリポジトリは、ThoughtfishCoalaPluginをmacOS版Unreal Engine 5.2に対応させたものです。

## 変更内容

1. **プラットフォーム対応の追加**
   - `ThoughtfishCoalaPlugin.uplugin`ファイルの`PlatformAllowList`に`Mac`を追加
   - macOS固有のビルド設定を`ThoughtfishCoalaPlugin.Build.cs`に追加

2. **macOS互換性の修正**
   - レンダリング設定構造体のポインタ初期化を`0`から`nullptr`に変更
   - macOS固有のコンパイラフラグを追加

3. **ブループリントエラーの修正**
   - BP_Coala、Coala_Paper_Map、BP_HeatMapTokenなどのブループリントで発生していた型エラーを修正

## インストール方法

1. Unreal Engineプロジェクトの`Plugins`フォルダに`ThoughtfishCoalaPlugin`フォルダをコピーします
2. Unreal Engineを起動し、プロジェクトを開きます
3. プラグインが自動的に読み込まれます
4. メニューの`編集` > `プラグイン`から`Coala Blueprints`が有効になっていることを確認します

## 注意点

- このプラグインはUnreal Engine 5.2向けに開発されています
- macOS版での使用には、Xcode 14以上が必要です
- プラグインのコンパイルにはC++プロジェクトが必要です

## 技術的な詳細

### macOS対応のための変更点

1. **プラグイン定義ファイル (ThoughtfishCoalaPlugin.uplugin)**
   - `PlatformAllowList`に`Mac`を追加して、macOSプラットフォームでのプラグインの読み込みを許可

2. **ビルド設定ファイル (ThoughtfishCoalaPlugin.Build.cs)**
   - macOS固有の条件分岐を追加
   - RTTIを有効化
   - macOS固有のコンパイラ定義を追加

3. **レンダリング設定構造体**
   - ポインタの初期化を`0`から`nullptr`に変更して、C++11以降の標準に準拠
   - これにより、macOSのClangコンパイラでの互換性を確保

### ブループリントエラーの修正

エラーが発生していたブループリント:
- Blueprint /Game/ThoughtfishCoalaPlugin/Blueprints/BP_Coala.BP_Coala
- LevelScriptBlueprint /Game/ThoughtfishCoalaPlugin/PaperMap/Content/PaperMap/Coala_Paper_Map
- Blueprint /Game/ThoughtfishCoalaPlugin/Blueprints/Crime/BP_HeatMapToken

これらのブループリントで使用されている変数の型定義を修正することで、macOSでの互換性を確保しました。
