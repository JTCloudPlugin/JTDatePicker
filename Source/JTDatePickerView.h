//
//  JTDatePickerView.h
//  WeexEros
//
//  Created by Xiaoneng on 2018/7/4.
//  Copyright © 2018年 kk. All rights reserved.
//

#import <UIKit/UIKit.h>

#define SCREEN_WIDTH        [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT       [UIScreen mainScreen].bounds.size.height
#define KDEVICE_IS_IPHONEX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
#define BILI ([UIScreen mainScreen].bounds.size.height==812?734/667.0:[UIScreen mainScreen].bounds.size.height/667.0)
#define BILIWIDTH ([UIScreen mainScreen].bounds.size.width/375.0)

/**
 *  日期选择器时间范围。
 */
typedef NS_ENUM(NSInteger, JTDatePickerViewDateRangeModel) {
    JTDatePickerViewDateRangeModelCurrent, //最大时间为当前系统时间。用途：例如选择生日的时候不可能大于当前时间。
    JTDatePickerViewDateRangeModelCustom //自定义时间范围。可通过下面的属性minYear和maxYear设定。
};



@protocol JTDatePickerViewDelegate;


@interface JTDatePickerView : UIView

@property (nonatomic, assign) NSInteger minYear; //时间列表最小年份，不能大于最大年份。默认为1970年。
@property (nonatomic, assign) NSInteger maxYear; //时间列表最大年份，不能小于最小年份。默认为当前年份
@property (nonatomic, assign) JTDatePickerViewDateRangeModel  datePickerViewDateRangeModel; //时间范围模式，默认为QBMDatePickerViewDateRangeModelCurrent。
@property (nonatomic, assign, readonly, getter=isVisible) BOOL visible; //YES:处于显示状态，NO:处于隐藏状态。

@property (nonatomic, assign) id<JTDatePickerViewDelegate> delegate;

/**
 *  显示时间选择器。
 *
 *  @param date 初始显示日期，传nil则默认显示当前日期。
 *  @param animation YES:有动画，NO:无动画。
 */
- (void)showViewWithDate:(NSDate *)date animation:(BOOL)animation;

/**
 *  隐藏时间选择器。
 *
 *  @param animation YES:有动画，NO:无动画。
 */
- (void)hideViewWithAnimation:(BOOL)animation;
- (id)initWithFrame:(CGRect)frame  withDic:(NSDictionary *)dict;
@end

@protocol JTDatePickerViewDelegate <NSObject>

- (void)datePickerView:(JTDatePickerView *)datePickerView didSelectDate:(NSDate *)date;
- (void)cancleEvent;

@end
