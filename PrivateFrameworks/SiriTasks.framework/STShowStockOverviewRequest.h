/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STShowStockOverviewRequest : AFSiriRequest {
    NSNumber * _change;
    NSNumber * _changePercent;
    NSString * _chartData;
    NSString * _exchange;
    NSNumber * _high;
    NSNumber * _low;
    NSString * _name;
    NSNumber * _price;
    NSString * _symbol;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithName:(id)arg1 symbol:(id)arg2 exchange:(id)arg3 price:(id)arg4 high:(id)arg5 low:(id)arg6 change:(id)arg7 changePercent:(id)arg8 chartData:(id)arg9;
- (id)change;
- (id)changePercent;
- (id)chartData;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)exchange;
- (id)high;
- (id)initWithCoder:(id)arg1;
- (id)low;
- (id)name;
- (id)price;
- (id)symbol;

@end
