while true
do
    rm -f /tmp/fake_token_level10
    ln -s ~/token /tmp/fake_token_level10
    rm -f /tmp/fake_token_level10
    touch /tmp/fake_token_level10
done