/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAEmailSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * emailResults;
@property(copy) NSArray * results;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)searchCompletedWithEmailResults:(id)arg1;
+ (id)searchCompletedWithResults:(id)arg1;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchCompleted;

- (id)results;
- (void)setResults:(id)arg1;
- (id)emailResults;
- (void)setEmailResults:(id)arg1;
- (id)initWithEmailResults:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
