将按钮点击事件转成block回调
使用UIButton+Block这个分类时，要使用cancelButtonEventBlock方法释放属性，否则按钮将释放不掉，按钮所属的VC或View也释放不掉。