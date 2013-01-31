/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SALocalSearchNavigationPromptManeuverCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)navigationPromptManeuverCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)navigationPromptManeuverCompleted;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
