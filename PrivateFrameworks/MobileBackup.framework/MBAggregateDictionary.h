/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSMutableDictionary, NSDictionary;

@interface MBAggregateDictionary : NSObject  {
    NSMutableDictionary *_scalars;
}

@property(readonly) NSDictionary * scalars;

+ (void)pushValue:(double)arg1 forDistributionKey:(id)arg2;
+ (void)incrementScalarKey:(id)arg1;
+ (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
+ (void)setValue:(long long)arg1 forScalarKey:(id)arg2;

- (void)save;
- (void)dealloc;
- (id)init;
- (void)addCountAndSizeOfFile:(id)arg1;
- (id)scalars;
- (void)_addScalarValue:(unsigned long long)arg1 forKey:(id)arg2;

@end
