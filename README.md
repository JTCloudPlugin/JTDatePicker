# JTDatePicker
JTDatePicker 基于eros的weex支付宝支付插件

##  安装方式
####1、引入方式
<pre>
	pod 'JTDatePicker', :git => 'https://github.com/JTCloudPlugin/JTDatePicker.git', :tag => '1.0.1'
</pre>

 
<b>2、调用方式</b>


<pre>
	const dateTimePicker = weex.requireModule('JTDatePickerModule');

  
	dateTimePicker.open({
	  value: '',//必选,选中的值，格式为yyyy-MM-dd;当value为空,默认选中当前时间;当value不为空时,选中value的返回值
	  max: '',//可选，日期最大值,默认2099-12-31
	  min: '',//可选，日期最小值,默认1900-12-31
	  title: '',//可选，标题的文案，默认为空
	  titleColor: '',//可选，默认为空,title不为空时有效，颜色值（#313131）
	  confirmTitle: '', //确认按钮的文案,默认值（完成）
	  confirmTitleColor: '', //确认按钮的文字颜色，默认值(#00b4ff)
	  cancelTitle: '', //取消按钮的文案,默认值（取消）
	  cancelTitleColor: '', //取消按钮的文字颜色,默认值(#313131)
	},(res) =>{//回调
	  //返回字段
	  //result{string}：success,cancel
	  //data {string}：格式为yyyy-MM-dd
	  if(res.result === "success"){
	    //业务逻辑
	  }else{
	    //业务逻辑
	  }
	});

</pre>
 
