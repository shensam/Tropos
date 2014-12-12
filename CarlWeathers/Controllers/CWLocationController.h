typedef void (^CWLocationCompletionBlock)(double latitude,
                                          double longitude);

typedef void (^CWLocationErrorBlock)(NSError *error);

@interface CWLocationController : NSObject

- (void)updateLocationWithCompletion:(CWLocationCompletionBlock)completionBlock
                          errorBlock:(CWLocationErrorBlock)errorBlock;

@end