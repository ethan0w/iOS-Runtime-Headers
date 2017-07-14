/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHPointFIFO : NSObject {
    CHPointFIFO * _nextFIFO;
}

@property (nonatomic, retain) CHPointFIFO *nextFIFO;

- (void)addPoint;
- (void)clear;
- (void)dealloc;
- (void)emitPoint;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)nextFIFO;
- (void)setNextFIFO:(id)arg1;

@end
